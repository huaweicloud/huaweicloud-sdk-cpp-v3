
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteReplicationRequestParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteReplicationRequestParams_H_

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
/// 删除复制对请求数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  DeleteReplicationRequestParams
    : public ModelBase
{
public:
    DeleteReplicationRequestParams();
    virtual ~DeleteReplicationRequestParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteReplicationRequestParams members

    /// <summary>
    /// 保护组的ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 是否删除容灾站点磁盘，默认值为false。
    /// </summary>

    bool isDeleteTargetVolume() const;
    bool deleteTargetVolumeIsSet() const;
    void unsetdeleteTargetVolume();
    void setDeleteTargetVolume(bool value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    bool deleteTargetVolume_;
    bool deleteTargetVolumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteReplicationRequestParams_H_
