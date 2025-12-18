
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CorpAdminDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CorpAdminDTO_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CorpAdminDTO
    : public ModelBase
{
public:
    CorpAdminDTO();
    virtual ~CorpAdminDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CorpAdminDTO members

    /// <summary>
    /// 企业用户帐号。 * 如果是帐号/密码鉴权方式，是指华为云会议帐号 * 如果是App ID鉴权方式，是指第三方User ID
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);


protected:
    std::string account_;
    bool accountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CorpAdminDTO_H_
