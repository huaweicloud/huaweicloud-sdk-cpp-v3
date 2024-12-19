
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowParameterGroupDetailRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowParameterGroupDetailRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowParameterGroupDetailRequest
    : public ModelBase
{
public:
    ShowParameterGroupDetailRequest();
    virtual ~ShowParameterGroupDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowParameterGroupDetailRequest members

    /// <summary>
    /// 语言,默认：en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 参数模板ID
    /// </summary>

    std::string getConfigId() const;
    bool configIdIsSet() const;
    void unsetconfigId();
    void setConfigId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string configId_;
    bool configIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowParameterGroupDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowParameterGroupDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowParameterGroupDetailRequest_H_
