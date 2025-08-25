
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeTaskMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeTaskMetadata_H_


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
/// 升级任务元数据
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeTaskMetadata
    : public ModelBase
{
public:
    UpgradeTaskMetadata();
    virtual ~UpgradeTaskMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeTaskMetadata members

    /// <summary>
    /// 升级任务ID
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// 任务创建时间
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// 任务更新时间
    /// </summary>

    std::string getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const std::string& value);


protected:
    std::string uid_;
    bool uidIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    std::string updateTimestamp_;
    bool updateTimestampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeTaskMetadata_H_
