
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_RuntimeConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_RuntimeConfig_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  RuntimeConfig
    : public ModelBase
{
public:
    RuntimeConfig();
    virtual ~RuntimeConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuntimeConfig members

    /// <summary>
    /// LVM写入模式：linear、striped。linear：线性模式；striped：条带模式，使用多块磁盘组成条带模式，能够提升磁盘性能。
    /// </summary>

    std::string getLvType() const;
    bool lvTypeIsSet() const;
    void unsetlvType();
    void setLvType(const std::string& value);


protected:
    std::string lvType_;
    bool lvTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_RuntimeConfig_H_
