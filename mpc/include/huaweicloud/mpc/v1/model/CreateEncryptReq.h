
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateEncryptReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateEncryptReq_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/Encryption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  CreateEncryptReq
    : public ModelBase
{
public:
    CreateEncryptReq();
    virtual ~CreateEncryptReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEncryptReq members

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    Encryption getEncryption() const;
    bool encryptionIsSet() const;
    void unsetencryption();
    void setEncryption(const Encryption& value);

    /// <summary>
    /// 用户自定义数据。 
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    Encryption encryption_;
    bool encryptionIsSet_;
    std::string userData_;
    bool userDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateEncryptReq_H_
