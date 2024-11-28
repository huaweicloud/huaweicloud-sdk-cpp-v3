
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_Agency_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_Agency_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  Agency
    : public ModelBase
{
public:
    Agency();
    virtual ~Agency();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Agency members

    /// <summary>
    /// 委托名称。
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// 委托ID。
    /// </summary>

    std::string getAgencyId() const;
    bool agencyIdIsSet() const;
    void unsetagencyId();
    void setAgencyId(const std::string& value);

    /// <summary>
    /// 异常信息。当委托创建失败时，返回的异常信息。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::string agencyId_;
    bool agencyIdIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_Agency_H_
