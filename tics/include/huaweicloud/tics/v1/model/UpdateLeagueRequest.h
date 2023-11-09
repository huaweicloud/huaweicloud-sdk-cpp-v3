
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_UpdateLeagueRequest_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_UpdateLeagueRequest_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/tics/v1/model/LeagueUpdateVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  UpdateLeagueRequest
    : public ModelBase
{
public:
    UpdateLeagueRequest();
    virtual ~UpdateLeagueRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLeagueRequest members

    /// <summary>
    /// 联盟id，最大32位，字母和数字组成
    /// </summary>

    std::string getLeagueId() const;
    bool leagueIdIsSet() const;
    void unsetleagueId();
    void setLeagueId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LeagueUpdateVo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LeagueUpdateVo& value);


protected:
    std::string leagueId_;
    bool leagueIdIsSet_;
    LeagueUpdateVo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateLeagueRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateLeagueRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_UpdateLeagueRequest_H_
