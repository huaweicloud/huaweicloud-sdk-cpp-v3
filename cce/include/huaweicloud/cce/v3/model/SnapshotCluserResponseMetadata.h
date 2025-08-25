
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotCluserResponseMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotCluserResponseMetadata_H_


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
/// 备份任务数据
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  SnapshotCluserResponseMetadata
    : public ModelBase
{
public:
    SnapshotCluserResponseMetadata();
    virtual ~SnapshotCluserResponseMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotCluserResponseMetadata members

    /// <summary>
    /// API版本，默认为v3.1
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 任务类型
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotCluserResponseMetadata_H_
