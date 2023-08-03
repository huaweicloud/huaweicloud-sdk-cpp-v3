
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Computes_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Computes_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ScaleFlavors.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  Computes
    : public ModelBase
{
public:
    Computes();
    virtual ~Computes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Computes members

    /// <summary>
    /// 群组类型。  - X86：X86架构。 - ARM：ARM架构。
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// 计算规格信息。
    /// </summary>

    std::vector<ScaleFlavors>& getComputeFlavors();
    bool computeFlavorsIsSet() const;
    void unsetcomputeFlavors();
    void setComputeFlavors(const std::vector<ScaleFlavors>& value);


protected:
    std::string groupType_;
    bool groupTypeIsSet_;
    std::vector<ScaleFlavors> computeFlavors_;
    bool computeFlavorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Computes_H_
