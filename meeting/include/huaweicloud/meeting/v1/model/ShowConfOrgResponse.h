
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowConfOrgResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowConfOrgResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowConfOrgResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowConfOrgResponse();
    virtual ~ShowConfOrgResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowConfOrgResponse members

    /// <summary>
    /// SP管理员根据会议ID查询该会议归属的企业ID。
    /// </summary>

    std::string getOrgID() const;
    bool orgIDIsSet() const;
    void unsetorgID();
    void setOrgID(const std::string& value);


protected:
    std::string orgID_;
    bool orgIDIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowConfOrgResponse_H_
