
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlExtensionResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlExtensionResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ExtensionsResponse.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListPostgresqlExtensionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPostgresqlExtensionResponse();
    virtual ~ListPostgresqlExtensionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPostgresqlExtensionResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ExtensionsResponse>& getExtensions();
    bool extensionsIsSet() const;
    void unsetextensions();
    void setExtensions(const std::vector<ExtensionsResponse>& value);

    /// <summary>
    /// 总插件数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ExtensionsResponse> extensions_;
    bool extensionsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlExtensionResponse_H_
