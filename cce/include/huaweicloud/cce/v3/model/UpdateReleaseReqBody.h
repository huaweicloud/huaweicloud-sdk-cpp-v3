
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateReleaseReqBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateReleaseReqBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ReleaseReqBodyParams.h>
#include <huaweicloud/cce/v3/model/CreateReleaseReqBody_values.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新模板实例的请求体
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateReleaseReqBody
    : public ModelBase
{
public:
    UpdateReleaseReqBody();
    virtual ~UpdateReleaseReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateReleaseReqBody members

    /// <summary>
    /// 模板ID
    /// </summary>

    std::string getChartId() const;
    bool chartIdIsSet() const;
    void unsetchartId();
    void setChartId(const std::string& value);

    /// <summary>
    /// 更新操作，升级为upgrade，回退为rollback
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReleaseReqBodyParams getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const ReleaseReqBodyParams& value);

    /// <summary>
    /// 
    /// </summary>

    CreateReleaseReqBody_values getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const CreateReleaseReqBody_values& value);


protected:
    std::string chartId_;
    bool chartIdIsSet_;
    std::string action_;
    bool actionIsSet_;
    ReleaseReqBodyParams parameters_;
    bool parametersIsSet_;
    CreateReleaseReqBody_values values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateReleaseReqBody_H_
