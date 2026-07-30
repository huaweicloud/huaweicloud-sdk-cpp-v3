
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CustomMetrics_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CustomMetrics_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/HttpGet.h>
#include <huaweicloud/modelarts/v1/model/Exec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CustomMetrics
    : public ModelBase
{
public:
    CustomMetrics();
    virtual ~CustomMetrics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomMetrics members

    /// <summary>
    /// 
    /// </summary>

    Exec getExec() const;
    bool execIsSet() const;
    void unsetexec();
    void setExec(const Exec& value);

    /// <summary>
    /// 
    /// </summary>

    HttpGet getHttpGet() const;
    bool httpGetIsSet() const;
    void unsethttpGet();
    void setHttpGet(const HttpGet& value);


protected:
    Exec exec_;
    bool execIsSet_;
    HttpGet httpGet_;
    bool httpGetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CustomMetrics_H_
