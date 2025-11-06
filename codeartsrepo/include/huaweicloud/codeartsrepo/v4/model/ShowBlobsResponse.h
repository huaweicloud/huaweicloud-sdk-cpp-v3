
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowBlobsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowBlobsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowBlobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBlobsResponse();
    virtual ~ShowBlobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBlobsResponse members

    /// <summary>
    /// **参数解释：** 文件字节大小。 **约束限制：** 不涉及。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// **参数解释：** 文件编码方式。 **约束限制：** - base64。
    /// </summary>

    std::string getEncoding() const;
    bool encodingIsSet() const;
    void unsetencoding();
    void setEncoding(const std::string& value);

    /// <summary>
    /// **参数解释：** 经过base64编码后的文件内容。 **约束限制：** 不涉及。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// **参数解释：** blob文件ID。 **约束限制：** 不涉及。
    /// </summary>

    std::string getBlobId() const;
    bool blobIdIsSet() const;
    void unsetblobId();
    void setBlobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    int64_t size_;
    bool sizeIsSet_;
    std::string encoding_;
    bool encodingIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string blobId_;
    bool blobIdIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowBlobsResponse_H_
