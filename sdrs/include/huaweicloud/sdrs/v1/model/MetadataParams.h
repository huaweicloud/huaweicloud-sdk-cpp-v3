
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_MetadataParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_MetadataParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 保护实例元数据数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  MetadataParams
    : public ModelBase
{
public:
    MetadataParams();
    virtual ~MetadataParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MetadataParams members

    /// <summary>
    /// 保护实例元数据中资源冻结的字段。 true：表示资源被冻结。 空：表示资源没有被冻结。
    /// </summary>

    std::string getSystemFrozen() const;
    bool systemFrozenIsSet() const;
    void unsetsystemFrozen();
    void setSystemFrozen(const std::string& value);


protected:
    std::string systemFrozen_;
    bool systemFrozenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_MetadataParams_H_
