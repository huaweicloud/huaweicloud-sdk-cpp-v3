
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_XCodeError_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_XCodeError_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MPC_V1_EXPORT  XCodeError
    : public ModelBase
{
public:
    XCodeError();
    virtual ~XCodeError();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// XCodeError members

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getMsg() const;
    bool msgIsSet() const;
    void unsetmsg();
    void setMsg(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string msg_;
    bool msgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_XCodeError_H_
