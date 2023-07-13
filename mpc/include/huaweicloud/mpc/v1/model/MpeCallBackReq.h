
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MpeCallBackReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MpeCallBackReq_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/mpc/v1/model/MpeMetaData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  MpeCallBackReq
    : public ModelBase
{
public:
    MpeCallBackReq();
    virtual ~MpeCallBackReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MpeCallBackReq members

    /// <summary>
    /// 任务类型
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务完成进度百分比值。 
    /// </summary>

    int32_t getCompleteRatio() const;
    bool completeRatioIsSet() const;
    void unsetcompleteRatio();
    void setCompleteRatio(int32_t value);

    /// <summary>
    /// 任务执行描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MpeMetaData getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const MpeMetaData& value);


protected:
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t completeRatio_;
    bool completeRatioIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    MpeMetaData metaData_;
    bool metaDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MpeCallBackReq_H_
