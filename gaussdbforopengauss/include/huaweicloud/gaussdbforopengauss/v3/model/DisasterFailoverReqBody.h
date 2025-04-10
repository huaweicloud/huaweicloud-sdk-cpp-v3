
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DisasterFailoverReqBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DisasterFailoverReqBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 容灾灾备升主请求参数。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DisasterFailoverReqBody
    : public ModelBase
{
public:
    DisasterFailoverReqBody();
    virtual ~DisasterFailoverReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisasterFailoverReqBody members

    /// <summary>
    /// 是否支持容灾回切(仅支持数据库版本大于等于3.100)   - true支持   - false不支持(默认false)
    /// </summary>

    bool isIsSupportRestore() const;
    bool isSupportRestoreIsSet() const;
    void unsetisSupportRestore();
    void setIsSupportRestore(bool value);

    /// <summary>
    /// 容灾类型。
    /// </summary>

    std::string getDisasterType() const;
    bool disasterTypeIsSet() const;
    void unsetdisasterType();
    void setDisasterType(const std::string& value);


protected:
    bool isSupportRestore_;
    bool isSupportRestoreIsSet_;
    std::string disasterType_;
    bool disasterTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DisasterFailoverReqBody_H_
