
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeletePublicationRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeletePublicationRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// （批量）删除发布。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DeletePublicationRequestBody
    : public ModelBase
{
public:
    DeletePublicationRequestBody();
    virtual ~DeletePublicationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeletePublicationRequestBody members

    /// <summary>
    /// 删除的发布id列表（需要是同一实例的发布）。
    /// </summary>

    std::vector<std::string>& getPublicationIds();
    bool publicationIdsIsSet() const;
    void unsetpublicationIds();
    void setPublicationIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> publicationIds_;
    bool publicationIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeletePublicationRequestBody_H_
