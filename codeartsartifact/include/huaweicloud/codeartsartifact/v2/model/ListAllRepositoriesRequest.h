
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAllRepositoriesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAllRepositoriesRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ListAllRepositoriesRequest
    : public ModelBase
{
public:
    ListAllRepositoriesRequest();
    virtual ~ListAllRepositoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllRepositoriesRequest members

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 组id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页大小
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 排序类型
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// 查询内容
    /// </summary>

    std::string getQname() const;
    bool qnameIsSet() const;
    void unsetqname();
    void setQname(const std::string& value);

    /// <summary>
    /// 仓库类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 仓库格式
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 仓库格式列表
    /// </summary>

    std::string getFormatList() const;
    bool formatListIsSet() const;
    void unsetformatList();
    void setFormatList(const std::string& value);

    /// <summary>
    /// 是否是回收站文件
    /// </summary>

    bool isIsRecycleBin() const;
    bool isRecycleBinIsSet() const;
    void unsetisRecycleBin();
    void setIsRecycleBin(bool value);

    /// <summary>
    /// 是否需要分页
    /// </summary>

    bool isIsNeedPaging() const;
    bool isNeedPagingIsSet() const;
    void unsetisNeedPaging();
    void setIsNeedPaging(bool value);

    /// <summary>
    /// 是否在项目中
    /// </summary>

    bool isInProject() const;
    bool inProjectIsSet() const;
    void unsetinProject();
    void setInProject(bool value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string sort_;
    bool sortIsSet_;
    std::string qname_;
    bool qnameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string formatList_;
    bool formatListIsSet_;
    bool isRecycleBin_;
    bool isRecycleBinIsSet_;
    bool isNeedPaging_;
    bool isNeedPagingIsSet_;
    bool inProject_;
    bool inProjectIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAllRepositoriesRequest& dereference_from_shared_ptr(std::shared_ptr<ListAllRepositoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAllRepositoriesRequest_H_
