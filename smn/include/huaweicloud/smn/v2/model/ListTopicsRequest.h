
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicsRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicsRequest_H_


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
class HUAWEICLOUD_SMN_V2_EXPORT  ListTopicsRequest
    : public ModelBase
{
public:
    ListTopicsRequest();
    virtual ~ListTopicsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopicsRequest members

    /// <summary>
    /// 偏移量。  偏移量为一个大于0小于资源总个数的整数，表示查询该偏移量后面的所有的资源，默认值为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    ///  查询的数量限制。  取值范围：1~100，取值一般为10，20，50。功能说明：每页返回的资源个数。默认值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 企业项目id，默认企业项目id为0。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 检索的主题名称，完全匹配。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 检索的主题名称，模糊匹配。
    /// </summary>

    std::string getFuzzyName() const;
    bool fuzzyNameIsSet() const;
    void unsetfuzzyName();
    void setFuzzyName(const std::string& value);

    /// <summary>
    /// 检索的主题ID，完全匹配。
    /// </summary>

    std::string getTopicId() const;
    bool topicIdIsSet() const;
    void unsettopicId();
    void setTopicId(const std::string& value);

    /// <summary>
    /// 检索的主题显示名。模糊匹配。参数字节长度不能大于192字节。
    /// </summary>

    std::string getFuzzyDisplayName() const;
    bool fuzzyDisplayNameIsSet() const;
    void unsetfuzzyDisplayName();
    void setFuzzyDisplayName(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string fuzzyName_;
    bool fuzzyNameIsSet_;
    std::string topicId_;
    bool topicIdIsSet_;
    std::string fuzzyDisplayName_;
    bool fuzzyDisplayNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTopicsRequest& dereference_from_shared_ptr(std::shared_ptr<ListTopicsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListTopicsRequest_H_
