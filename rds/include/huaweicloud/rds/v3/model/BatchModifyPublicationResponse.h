
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchModifyPublicationResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchModifyPublicationResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/BatchOperateResponseInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BatchModifyPublicationResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchModifyPublicationResponse();
    virtual ~BatchModifyPublicationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchModifyPublicationResponse members

    /// <summary>
    /// 修改发布结果。
    /// </summary>

    std::vector<BatchOperateResponseInfo>& getPublications();
    bool publicationsIsSet() const;
    void unsetpublications();
    void setPublications(const std::vector<BatchOperateResponseInfo>& value);


protected:
    std::vector<BatchOperateResponseInfo> publications_;
    bool publicationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchModifyPublicationResponse_H_
