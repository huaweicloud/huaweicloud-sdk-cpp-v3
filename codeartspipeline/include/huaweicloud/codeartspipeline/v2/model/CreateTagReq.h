
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateTagReq_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateTagReq_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建流水线标签请求体
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  CreateTagReq
    : public ModelBase
{
public:
    CreateTagReq();
    virtual ~CreateTagReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTagReq members

    /// <summary>
    /// 标签名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 标签颜色
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string color_;
    bool colorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateTagReq_H_
