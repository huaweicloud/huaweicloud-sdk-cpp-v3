
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointExtraInfoResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointExtraInfoResp_H_


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
class HUAWEICLOUD_CBR_V1_EXPORT  CheckpointExtraInfoResp
    : public ModelBase
{
public:
    CheckpointExtraInfoResp();
    virtual ~CheckpointExtraInfoResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckpointExtraInfoResp members

    /// <summary>
    /// 备份名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备份描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 备份保留天数
    /// </summary>

    int32_t getRetentionDuration() const;
    bool retentionDurationIsSet() const;
    void unsetretentionDuration();
    void setRetentionDuration(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t retentionDuration_;
    bool retentionDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointExtraInfoResp_H_
