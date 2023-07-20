
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussInstanceActionRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussInstanceActionRequest_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussEnlargeVolume.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussExpandCluster.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  OpenGaussInstanceActionRequest
    : public ModelBase
{
public:
    OpenGaussInstanceActionRequest();
    virtual ~OpenGaussInstanceActionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OpenGaussInstanceActionRequest members

    /// <summary>
    /// 
    /// </summary>

    OpenGaussExpandCluster getExpandCluster() const;
    bool expandClusterIsSet() const;
    void unsetexpandCluster();
    void setExpandCluster(const OpenGaussExpandCluster& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussEnlargeVolume getEnlargeVolume() const;
    bool enlargeVolumeIsSet() const;
    void unsetenlargeVolume();
    void setEnlargeVolume(const OpenGaussEnlargeVolume& value);

    /// <summary>
    /// 包周期实例时可指定，表示是否自动从账户中支付，此字段不影响自动续订的支付方式。  true，表示自动从账户中支付。 false，表示手动从账户中支付，默认为该方式。
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    OpenGaussExpandCluster expandCluster_;
    bool expandClusterIsSet_;
    OpenGaussEnlargeVolume enlargeVolume_;
    bool enlargeVolumeIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussInstanceActionRequest_H_
