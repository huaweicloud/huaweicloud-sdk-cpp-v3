
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListEngineFlavorsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListEngineFlavorsRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListEngineFlavorsRequest
    : public ModelBase
{
public:
    ListEngineFlavorsRequest();
    virtual ~ListEngineFlavorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEngineFlavorsRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 可用区，多个用\&quot;,\&quot;分割，如cn-southwest-244a,cn-southwest-244b
    /// </summary>

    std::string getAvailabilityZoneIds() const;
    bool availabilityZoneIdsIsSet() const;
    void unsetavailabilityZoneIds();
    void setAvailabilityZoneIds(const std::string& value);

    /// <summary>
    /// 模式，包括如下类型： ha：主备实例。 replica：只读实例。 single：单实例。
    /// </summary>

    std::string getHaMode() const;
    bool haModeIsSet() const;
    void unsethaMode();
    void setHaMode(const std::string& value);

    /// <summary>
    /// 性能规格,如rds.dec.pg.s1.medium，模糊匹配该规格类型
    /// </summary>

    std::string getSpecCodeLike() const;
    bool specCodeLikeIsSet() const;
    void unsetspecCodeLike();
    void setSpecCodeLike(const std::string& value);

    /// <summary>
    /// 规格类型，包括如下类型：simple、dec
    /// </summary>

    std::string getFlavorCategoryType() const;
    bool flavorCategoryTypeIsSet() const;
    void unsetflavorCategoryType();
    void setFlavorCategoryType(const std::string& value);

    /// <summary>
    /// 是否显示高可用只读类型
    /// </summary>

    bool isIsRhaFlavor() const;
    bool isRhaFlavorIsSet() const;
    void unsetisRhaFlavor();
    void setIsRhaFlavor(bool value);

    /// <summary>
    /// 索引位置，偏移量。 从第一条数据偏移offset条数据后开始查询，默认为0。 取值必须为数字，且不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询个数上限值。 取值范围：1~100。 不传该参数时，默认查询前100条信息。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string availabilityZoneIds_;
    bool availabilityZoneIdsIsSet_;
    std::string haMode_;
    bool haModeIsSet_;
    std::string specCodeLike_;
    bool specCodeLikeIsSet_;
    std::string flavorCategoryType_;
    bool flavorCategoryTypeIsSet_;
    bool isRhaFlavor_;
    bool isRhaFlavorIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListEngineFlavorsRequest& dereference_from_shared_ptr(std::shared_ptr<ListEngineFlavorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListEngineFlavorsRequest_H_
