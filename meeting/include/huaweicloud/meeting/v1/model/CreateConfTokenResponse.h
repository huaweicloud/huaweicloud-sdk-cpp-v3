
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateConfTokenResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateConfTokenResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/TokenInfo.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  CreateConfTokenResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateConfTokenResponse();
    virtual ~CreateConfTokenResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateConfTokenResponse members

    /// <summary>
    /// 
    /// </summary>

    TokenInfo getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const TokenInfo& value);

    /// <summary>
    /// 企业通讯录查询临时Token。
    /// </summary>

    std::string getAddressToken() const;
    bool addressTokenIsSet() const;
    void unsetaddressToken();
    void setAddressToken(const std::string& value);

    /// <summary>
    /// 华为云会议Portal地址。
    /// </summary>

    std::string getGloablPublicIP() const;
    bool gloablPublicIPIsSet() const;
    void unsetgloablPublicIP();
    void setGloablPublicIP(const std::string& value);


protected:
    TokenInfo data_;
    bool dataIsSet_;
    std::string addressToken_;
    bool addressTokenIsSet_;
    std::string gloablPublicIP_;
    bool gloablPublicIPIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateConfTokenResponse_H_
