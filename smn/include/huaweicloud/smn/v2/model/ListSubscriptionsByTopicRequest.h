
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListSubscriptionsByTopicRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListSubscriptionsByTopicRequest_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListSubscriptionsByTopicRequest
    : public ModelBase
{
public:
    ListSubscriptionsByTopicRequest();
    virtual ~ListSubscriptionsByTopicRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionsByTopicRequest members

    /// <summary>
    /// Topic的唯一的资源标识，可通过[查询主题列表](smn_api_51004.xml)获取该标识。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 偏移量。  偏移量为一个大于0小于资源总个数的整数，表示查询该偏移量后面的所有的资源，默认值为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询的数量限制。  取值范围：1~100，取值一般为10，20，50。功能说明：每页返回的资源个数。默认值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 检索的订阅备注字段，模糊匹配。最大长度限制为128字节。
    /// </summary>

    std::string getFuzzyRemark() const;
    bool fuzzyRemarkIsSet() const;
    void unsetfuzzyRemark();
    void setFuzzyRemark(const std::string& value);


protected:
    std::string topicUrn_;
    bool topicUrnIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string fuzzyRemark_;
    bool fuzzyRemarkIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSubscriptionsByTopicRequest& dereference_from_shared_ptr(std::shared_ptr<ListSubscriptionsByTopicRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListSubscriptionsByTopicRequest_H_
