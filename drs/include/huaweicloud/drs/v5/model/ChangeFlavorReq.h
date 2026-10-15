
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ChangeFlavorReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ChangeFlavorReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规格变更请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ChangeFlavorReq
    : public ModelBase
{
public:
    ChangeFlavorReq();
    virtual ~ChangeFlavorReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeFlavorReq members

    /// <summary>
    /// 目标规格类型。 取值： - micro：极小规格。 - small：小规格。 - medium：中规格。 - high：大规格。 - xlarge：超大规格。 - 2xlarge：极大规格。
    /// </summary>

    std::string getSpecType() const;
    bool specTypeIsSet() const;
    void unsetspecType();
    void setSpecType(const std::string& value);


protected:
    std::string specType_;
    bool specTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ChangeFlavorReq_H_
