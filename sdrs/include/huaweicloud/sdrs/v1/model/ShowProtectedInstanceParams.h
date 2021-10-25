
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectedInstanceParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectedInstanceParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ProtectedInstanceAttachment.h>
#include <string>
#include <huaweicloud/sdrs/v1/model/ResourceTag.h>
#include <huaweicloud/sdrs/v1/model/MetadataParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 查询保护实例数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowProtectedInstanceParams
    : public ModelBase
{
public:
    ShowProtectedInstanceParams();
    virtual ~ShowProtectedInstanceParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowProtectedInstanceParams members

    /// <summary>
    /// 保护实例的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 保护实例的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 保护实例的描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 保护实例的状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 生产站点云服务器ID。
    /// </summary>

    std::string getSourceServer() const;
    bool sourceServerIsSet() const;
    void unsetsourceServer();
    void setSourceServer(const std::string& value);

    /// <summary>
    /// 容灾站点云服务器ID。
    /// </summary>

    std::string getTargetServer() const;
    bool targetServerIsSet() const;
    void unsettargetServer();
    void setTargetServer(const std::string& value);

    /// <summary>
    /// 保护组的ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 创建时间。默认格式为：\&quot;yyyy-MM-dd HH:mm:ss.SSS\&quot;，例：\&quot;2019-04-01 12:00:00.000\&quot;。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间。默认格式为：\&quot;yyyy-MM-dd HH:mm:ss.SSS\&quot;，例：\&quot;2019-04-01 12:00:00.000\&quot;。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MetadataParams getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const MetadataParams& value);

    /// <summary>
    /// 挂载的复制对列表。
    /// </summary>

    std::vector<ProtectedInstanceAttachment>& getAttachment();
    bool attachmentIsSet() const;
    void unsetattachment();
    void setAttachment(const std::vector<ProtectedInstanceAttachment>& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 保护实例的同步进度。单位：百分比（%）。
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 标识保护实例所在保护组的当前生产站点可用区。source：表示当前生产站点可用区为保护组source_availability_zone的值。target：表示当前生产站点可用区为保护组的target_availability_zone的值。
    /// </summary>

    std::string getPriorityStation() const;
    bool priorityStationIsSet() const;
    void unsetpriorityStation();
    void setPriorityStation(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string sourceServer_;
    bool sourceServerIsSet_;
    std::string targetServer_;
    bool targetServerIsSet_;
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    MetadataParams metadata_;
    bool metadataIsSet_;
    std::vector<ProtectedInstanceAttachment> attachment_;
    bool attachmentIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    std::string priorityStation_;
    bool priorityStationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectedInstanceParams_H_
