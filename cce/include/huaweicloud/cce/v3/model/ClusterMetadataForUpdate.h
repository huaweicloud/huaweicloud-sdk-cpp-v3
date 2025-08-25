
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterMetadataForUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterMetadataForUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterMetadataForUpdate
    : public ModelBase
{
public:
    ClusterMetadataForUpdate();
    virtual ~ClusterMetadataForUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterMetadataForUpdate members

    /// <summary>
    /// 集群显示名。  命名规则：以小写字母开头，由小写字母、数字、中划线(-)组成，长度范围4-128位，且不能以中划线(-)结尾。  显示名和其他集群的名称、显示名不可以重复。  为空时表示不进行修改。
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);


protected:
    std::string alias_;
    bool aliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterMetadataForUpdate_H_
