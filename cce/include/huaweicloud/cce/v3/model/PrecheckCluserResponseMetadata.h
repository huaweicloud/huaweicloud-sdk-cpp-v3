
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PrecheckCluserResponseMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PrecheckCluserResponseMetadata_H_


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
/// 升级前检查元数据
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PrecheckCluserResponseMetadata
    : public ModelBase
{
public:
    PrecheckCluserResponseMetadata();
    virtual ~PrecheckCluserResponseMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrecheckCluserResponseMetadata members

    /// <summary>
    /// 检查任务ID
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);


protected:
    std::string uid_;
    bool uidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PrecheckCluserResponseMetadata_H_
