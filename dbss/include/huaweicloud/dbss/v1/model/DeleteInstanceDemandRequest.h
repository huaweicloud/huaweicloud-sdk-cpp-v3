
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteInstanceDemandRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteInstanceDemandRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  DeleteInstanceDemandRequest
    : public ModelBase
{
public:
    DeleteInstanceDemandRequest();
    virtual ~DeleteInstanceDemandRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteInstanceDemandRequest members

    /// <summary>
    /// **参数解释**： 实例ID。可通过查询实例列表接口ID字段获取 **约束限制**： 不涉及 **取值范围**： 以查询实例列表接口值为准，字符长度32-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 是否删除弹性IP
    /// </summary>

    bool isDeletePublicip() const;
    bool deletePublicipIsSet() const;
    void unsetdeletePublicip();
    void setDeletePublicip(bool value);

    /// <summary>
    /// 是否删除磁盘
    /// </summary>

    bool isDeleteVolume() const;
    bool deleteVolumeIsSet() const;
    void unsetdeleteVolume();
    void setDeleteVolume(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    bool deletePublicip_;
    bool deletePublicipIsSet_;
    bool deleteVolume_;
    bool deleteVolumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteInstanceDemandRequest_H_
