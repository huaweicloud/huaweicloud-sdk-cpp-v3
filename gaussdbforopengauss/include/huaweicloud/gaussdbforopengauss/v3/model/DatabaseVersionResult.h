
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatabaseVersionResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatabaseVersionResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/DbHotfixInfoResult.h>
#include <vector>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DatabaseVersionResult
    : public ModelBase
{
public:
    DatabaseVersionResult();
    virtual ~DatabaseVersionResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseVersionResult members

    /// <summary>
    /// **参数解释**： 数据库三位引擎版本。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSoftwareVersion() const;
    bool softwareVersionIsSet() const;
    void unsetsoftwareVersion();
    void setSoftwareVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 数据库三位引擎版本对应的热补丁信息。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<DbHotfixInfoResult>& getHotfixes();
    bool hotfixesIsSet() const;
    void unsethotfixes();
    void setHotfixes(const std::vector<DbHotfixInfoResult>& value);


protected:
    std::string softwareVersion_;
    bool softwareVersionIsSet_;
    std::vector<DbHotfixInfoResult> hotfixes_;
    bool hotfixesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatabaseVersionResult_H_
