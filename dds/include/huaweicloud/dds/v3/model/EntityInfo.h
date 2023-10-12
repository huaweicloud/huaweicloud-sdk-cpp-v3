
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_EntityInfo_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_EntityInfo_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  EntityInfo
    : public ModelBase
{
public:
    EntityInfo();
    virtual ~EntityInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EntityInfo members

    /// <summary>
    /// 组ID或节点ID。
    /// </summary>

    std::string getEntityId() const;
    bool entityIdIsSet() const;
    void unsetentityId();
    void setEntityId(const std::string& value);

    /// <summary>
    /// 组名称或节点名称。
    /// </summary>

    std::string getEntityName() const;
    bool entityNameIsSet() const;
    void unsetentityName();
    void setEntityName(const std::string& value);


protected:
    std::string entityId_;
    bool entityIdIsSet_;
    std::string entityName_;
    bool entityNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_EntityInfo_H_
