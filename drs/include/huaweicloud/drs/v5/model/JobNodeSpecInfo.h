
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeSpecInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeSpecInfo_H_


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
/// 任务实例规格信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobNodeSpecInfo
    : public ModelBase
{
public:
    JobNodeSpecInfo();
    virtual ~JobNodeSpecInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobNodeSpecInfo members

    /// <summary>
    /// 实例规格编码。取值： - micro：极小规格。 - small：小规格。 - medium：中规格。 - high：大规格。
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);


protected:
    std::string nodeType_;
    bool nodeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeSpecInfo_H_
