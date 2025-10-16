
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ModuleSearchDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ModuleSearchDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// OTA模块结构。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ModuleSearchDTO
    : public ModelBase
{
public:
    ModuleSearchDTO();
    virtual ~ModuleSearchDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModuleSearchDTO members

    /// <summary>
    /// 模块名称。
    /// </summary>

    std::string getModuleName() const;
    bool moduleNameIsSet() const;
    void unsetmoduleName();
    void setModuleName(const std::string& value);

    /// <summary>
    /// 模块版本号。
    /// </summary>

    std::string getModuleVersion() const;
    bool moduleVersionIsSet() const;
    void unsetmoduleVersion();
    void setModuleVersion(const std::string& value);


protected:
    std::string moduleName_;
    bool moduleNameIsSet_;
    std::string moduleVersion_;
    bool moduleVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ModuleSearchDTO_H_
