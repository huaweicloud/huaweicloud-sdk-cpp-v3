
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_QueryResourceByTagsDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_QueryResourceByTagsDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/TagV5DTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 按标签查询资源请求结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  QueryResourceByTagsDTO
    : public ModelBase
{
public:
    QueryResourceByTagsDTO();
    virtual ~QueryResourceByTagsDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryResourceByTagsDTO members

    /// <summary>
    /// **参数说明**：要查询的资源类型，当前支持设备（device）。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// **参数说明**：标签列表，支持按照标签key和value组合查询，传入的多个标签之间是或的关系。
    /// </summary>

    std::vector<TagV5DTO>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagV5DTO>& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::vector<TagV5DTO> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_QueryResourceByTagsDTO_H_
