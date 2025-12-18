
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowWebHookConfigRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowWebHookConfigRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowWebHookConfigRequest
    : public ModelBase
{
public:
    ShowWebHookConfigRequest();
    virtual ~ShowWebHookConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWebHookConfigRequest members

    /// <summary>
    /// 企业ID。按企业注册回调时需要填写。
    /// </summary>

    std::string getCorpId() const;
    bool corpIdIsSet() const;
    void unsetcorpId();
    void setCorpId(const std::string& value);

    /// <summary>
    /// SP ID。多租户场景下，按SP注册回调时需要填写。
    /// </summary>

    std::string getSpId() const;
    bool spIdIsSet() const;
    void unsetspId();
    void setSpId(const std::string& value);


protected:
    std::string corpId_;
    bool corpIdIsSet_;
    std::string spId_;
    bool spIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowWebHookConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ShowWebHookConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowWebHookConfigRequest_H_
