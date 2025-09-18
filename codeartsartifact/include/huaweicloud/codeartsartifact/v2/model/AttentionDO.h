
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_AttentionDO_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_AttentionDO_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  AttentionDO
    : public ModelBase
{
public:
    AttentionDO();
    virtual ~AttentionDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttentionDO members

    /// <summary>
    /// 关注/取消关注
    /// </summary>

    std::string getAttention() const;
    bool attentionIsSet() const;
    void unsetattention();
    void setAttention(const std::string& value);

    /// <summary>
    /// 组件id列表
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);

    /// <summary>
    /// 格式
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);


protected:
    std::string attention_;
    bool attentionIsSet_;
    std::vector<std::string> ids_;
    bool idsIsSet_;
    std::string format_;
    bool formatIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_AttentionDO_H_
