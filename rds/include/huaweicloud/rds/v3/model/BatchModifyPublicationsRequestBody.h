
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchModifyPublicationsRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchModifyPublicationsRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/OperateUsedJobSchedule.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改发布详情。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BatchModifyPublicationsRequestBody
    : public ModelBase
{
public:
    BatchModifyPublicationsRequestBody();
    virtual ~BatchModifyPublicationsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchModifyPublicationsRequestBody members

    /// <summary>
    /// 修改的发布id列表。
    /// </summary>

    std::vector<std::string>& getPublicationIds();
    bool publicationIdsIsSet() const;
    void unsetpublicationIds();
    void setPublicationIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    OperateUsedJobSchedule getJobSchedule() const;
    bool jobScheduleIsSet() const;
    void unsetjobSchedule();
    void setJobSchedule(const OperateUsedJobSchedule& value);


protected:
    std::vector<std::string> publicationIds_;
    bool publicationIdsIsSet_;
    OperateUsedJobSchedule jobSchedule_;
    bool jobScheduleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchModifyPublicationsRequestBody_H_
