
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeNicSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeNicSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NicSpec.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点网卡的描述信息。 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeNicSpec
    : public ModelBase
{
public:
    NodeNicSpec();
    virtual ~NodeNicSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeNicSpec members

    /// <summary>
    /// 
    /// </summary>

    NicSpec getPrimaryNic() const;
    bool primaryNicIsSet() const;
    void unsetprimaryNic();
    void setPrimaryNic(const NicSpec& value);

    /// <summary>
    /// 扩展网卡 &gt;创建节点池添加节点时不支持该参数。
    /// </summary>

    std::vector<NicSpec>& getExtNics();
    bool extNicsIsSet() const;
    void unsetextNics();
    void setExtNics(const std::vector<NicSpec>& value);


protected:
    NicSpec primaryNic_;
    bool primaryNicIsSet_;
    std::vector<NicSpec> extNics_;
    bool extNicsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeNicSpec_H_
