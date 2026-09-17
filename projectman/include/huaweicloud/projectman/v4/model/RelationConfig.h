
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_RelationConfig_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_RelationConfig_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/Relation.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  RelationConfig
    : public ModelBase
{
public:
    RelationConfig();
    virtual ~RelationConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RelationConfig members

    /// <summary>
    /// key为工作项类型，value为该类型的所有关联关系
    /// </summary>

    std::map<std::string, std::vector<Relation>>& getRelations();
    bool relationsIsSet() const;
    void unsetrelations();
    void setRelations(const std::map<std::string, std::vector<Relation>>& value);


protected:
    std::map<std::string, std::vector<Relation>> relations_;
    bool relationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_RelationConfig_H_
