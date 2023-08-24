
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImagesResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImagesResponse_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ims/v2/model/GlanceShowImageListResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceListImagesResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceListImagesResponse();
    virtual ~GlanceListImagesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceListImagesResponse members

    /// <summary>
    /// 查询首页的URL。
    /// </summary>

    std::string getFirst() const;
    bool firstIsSet() const;
    void unsetfirst();
    void setFirst(const std::string& value);

    /// <summary>
    /// 资源类型。
    /// </summary>

    std::vector<GlanceShowImageListResponseBody>& getImages();
    bool imagesIsSet() const;
    void unsetimages();
    void setImages(const std::vector<GlanceShowImageListResponseBody>& value);

    /// <summary>
    /// 描述镜像列表模式的URL。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 查询下一页的URL。当查询镜像列表最后一页时，不存在next。
    /// </summary>

    std::string getNext() const;
    bool nextIsSet() const;
    void unsetnext();
    void setNext(const std::string& value);


protected:
    std::string first_;
    bool firstIsSet_;
    std::vector<GlanceShowImageListResponseBody> images_;
    bool imagesIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::string next_;
    bool nextIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImagesResponse_H_
