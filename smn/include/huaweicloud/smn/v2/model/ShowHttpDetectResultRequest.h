
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowHttpDetectResultRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowHttpDetectResultRequest_H_


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
class HUAWEICLOUD_SMN_V2_EXPORT  ShowHttpDetectResultRequest
    : public ModelBase
{
public:
    ShowHttpDetectResultRequest();
    virtual ~ShowHttpDetectResultRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHttpDetectResultRequest members

    /// <summary>
    /// Topic的唯一的资源标识，可通过[查询主题列表](smn_api_51004.xml)获取该标识。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// http探测任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowHttpDetectResultRequest& dereference_from_shared_ptr(std::shared_ptr<ShowHttpDetectResultRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ShowHttpDetectResultRequest_H_
