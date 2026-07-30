
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MetricsItem_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MetricsItem_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/MetricTableItem.h>
#include <huaweicloud/modelarts/v1/model/ResourceMetricsMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源指标数据模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  MetricsItem
    : public ModelBase
{
public:
    MetricsItem();
    virtual ~MetricsItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricsItem members

    /// <summary>
    /// 
    /// </summary>

    MetricTableItem getTable() const;
    bool tableIsSet() const;
    void unsettable();
    void setTable(const MetricTableItem& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceMetricsMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const ResourceMetricsMetadata& value);


protected:
    MetricTableItem table_;
    bool tableIsSet_;
    ResourceMetricsMetadata metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MetricsItem_H_
