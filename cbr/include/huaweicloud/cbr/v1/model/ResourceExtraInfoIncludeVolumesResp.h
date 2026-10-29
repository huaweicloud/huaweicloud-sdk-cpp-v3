
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceExtraInfoIncludeVolumesResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceExtraInfoIncludeVolumesResp_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ResourceExtraInfoIncludeVolumesResp
    : public ModelBase
{
public:
    ResourceExtraInfoIncludeVolumesResp();
    virtual ~ResourceExtraInfoIncludeVolumesResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceExtraInfoIncludeVolumesResp members

    /// <summary>
    /// **参数解释：** 备份时，需要备份的卷的ID **取值范围：** 格式为uuid
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 操作系统类型 **取值范围：** 不涉及
    /// </summary>

    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string osVersion_;
    bool osVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceExtraInfoIncludeVolumesResp_H_
