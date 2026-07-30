
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageInfoResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageInfoResponse_H_


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
/// **参数解释：** 镜像配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ImageInfoResponse
    : public ModelBase
{
public:
    ImageInfoResponse();
    virtual ~ImageInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageInfoResponse members

    /// <summary>
    /// **参数解释：** 镜像id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 镜像类别，标识镜像来源。 **取值范围：** - SWR：软件仓库服务。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 镜像地址，source不同取值时，地址为不同值。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSwrPath() const;
    bool swrPathIsSet() const;
    void unsetswrPath();
    void setSwrPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 镜像支持的规格。 **取值范围：** - GPU：图形处理器。 - CPU：中央处理器。 - ASCEND：昇腾芯片。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageInfoResponse_H_
