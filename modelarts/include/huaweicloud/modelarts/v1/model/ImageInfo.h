
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageInfo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 镜像配置。 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ImageInfo
    : public ModelBase
{
public:
    ImageInfo();
    virtual ~ImageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageInfo members

    /// <summary>
    /// **参数解释：** 镜像ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 镜像类别，标识镜像来源。 **约束限制：** 不涉及。 **取值范围：** - SWR：软件仓库服务。 - [IMAGE：[通用镜像]。](tag:hws,hws_hk) **默认取值：** 不涉及。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 镜像地址，source不同取值时，地址为不同值。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSwrPath() const;
    bool swrPathIsSet() const;
    void unsetswrPath();
    void setSwrPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 镜像支持的规格。 **约束限制：** 不涉及。 **取值范围：** - GPU：图形处理器。 - CPU：中央处理器。 - ASCEND：昇腾芯片。 **默认取值：** CPU。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string swrPath_;
    bool swrPathIsSet_;
    std::string category_;
    bool categoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageInfo_H_
