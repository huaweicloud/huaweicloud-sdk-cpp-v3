
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SslOptionRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SslOptionRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SslOptionRequest
    : public ModelBase
{
public:
    SslOptionRequest();
    virtual ~SslOptionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SslOptionRequest members

    /// <summary>
    /// - true, 打开ssl开关。 - false, 关闭ssl开关。
    /// </summary>

    bool isSslOption() const;
    bool sslOptionIsSet() const;
    void unsetsslOption();
    void setSslOption(bool value);


protected:
    bool sslOption_;
    bool sslOptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SslOptionRequest_H_
