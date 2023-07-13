
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointCreate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointCreate_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CheckpointPlanCreate.h>
#include <string>
#include <huaweicloud/cbr/v1/model/CheckpointExtraInfoResp.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CheckpointCreate
    : public ModelBase
{
public:
    CheckpointCreate();
    virtual ~CheckpointCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CheckpointCreate members

    /// <summary>
    /// 创建时间，例如:\&quot;2020-02-05T10:38:34.209782\&quot;
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 还原点ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 状态:available,deleting,protecting,deleted,error-deleting,error
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CheckpointPlanCreate getVault() const;
    bool vaultIsSet() const;
    void unsetvault();
    void setVault(const CheckpointPlanCreate& value);

    /// <summary>
    /// 
    /// </summary>

    CheckpointExtraInfoResp getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const CheckpointExtraInfoResp& value);


protected:
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    CheckpointPlanCreate vault_;
    bool vaultIsSet_;
    CheckpointExtraInfoResp extraInfo_;
    bool extraInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointCreate_H_
