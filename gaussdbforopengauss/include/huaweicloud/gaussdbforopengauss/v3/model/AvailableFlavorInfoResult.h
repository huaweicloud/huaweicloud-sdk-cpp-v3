
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AvailableFlavorInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AvailableFlavorInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例可变更规格信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  AvailableFlavorInfoResult
    : public ModelBase
{
public:
    AvailableFlavorInfoResult();
    virtual ~AvailableFlavorInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AvailableFlavorInfoResult members

    /// <summary>
    /// 资源规格编码。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// CPU核数。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// 内存大小，单位：GB。
    /// </summary>

    std::string getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(const std::string& value);

    /// <summary>
    /// 其中key是可用区编号，value是规格所在az的状态。
    /// </summary>

    std::map<std::string, std::string>& getAzStatus();
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const std::map<std::string, std::string>& value);


protected:
    std::string specCode_;
    bool specCodeIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;
    std::map<std::string, std::string> azStatus_;
    bool azStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AvailableFlavorInfoResult_H_
