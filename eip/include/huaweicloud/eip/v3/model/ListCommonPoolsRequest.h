
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListCommonPoolsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListCommonPoolsRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ListCommonPoolsRequest
    : public ModelBase
{
public:
    ListCommonPoolsRequest();
    virtual ~ListCommonPoolsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCommonPoolsRequest members

    /// <summary>
    /// 显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;name&amp;...\&quot;  支持字段：id/name/status/type/used/allow_share_bandwidth_types/public_border_group
    /// </summary>

    std::string getFields() const;
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::string& value);

    /// <summary>
    /// 每页返回的个数取值范围：0~[2000]，其中2000为局点差异项，具体取值由局点决定
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页查询起始的资源序号
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 公共池名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 公共池位于中心还是边缘
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);


protected:
    std::string fields_;
    bool fieldsIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCommonPoolsRequest& dereference_from_shared_ptr(std::shared_ptr<ListCommonPoolsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListCommonPoolsRequest_H_
