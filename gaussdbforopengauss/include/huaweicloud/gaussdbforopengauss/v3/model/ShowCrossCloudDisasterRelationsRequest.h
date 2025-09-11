
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowCrossCloudDisasterRelationsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowCrossCloudDisasterRelationsRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowCrossCloudDisasterRelationsRequest
    : public ModelBase
{
public:
    ShowCrossCloudDisasterRelationsRequest();
    virtual ~ShowCrossCloudDisasterRelationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCrossCloudDisasterRelationsRequest members

    /// <summary>
    /// **参数解释**: 语言。 **约束限制**: 不涉及。 **取值范围**:   - zh-cn   - en-us  **默认取值**: en-us
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 查询记录数。默认为100，不能为负数，最小值为1，最大值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 实例名称，可查询过滤本端实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 实例id，可查询过滤本端实例id。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 容灾角色 - master 主 - disaster 备
    /// </summary>

    std::string getDrRole() const;
    bool drRoleIsSet() const;
    void unsetdrRole();
    void setDrRole(const std::string& value);

    /// <summary>
    /// 容灾类型 - stream - dorado
    /// </summary>

    std::string getDrType() const;
    bool drTypeIsSet() const;
    void unsetdrType();
    void setDrType(const std::string& value);

    /// <summary>
    /// 状态 - normal - failover - pending - pre_check_failed - pre_checking
    /// </summary>

    std::string getDrStatus() const;
    bool drStatusIsSet() const;
    void unsetdrStatus();
    void setDrStatus(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string drRole_;
    bool drRoleIsSet_;
    std::string drType_;
    bool drTypeIsSet_;
    std::string drStatus_;
    bool drStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCrossCloudDisasterRelationsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCrossCloudDisasterRelationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowCrossCloudDisasterRelationsRequest_H_
