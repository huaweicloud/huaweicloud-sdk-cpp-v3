
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryDeptResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryDeptResultDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/IdMarkDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryDeptResultDTO
    : public ModelBase
{
public:
    QueryDeptResultDTO();
    virtual ~QueryDeptResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDeptResultDTO members

    /// <summary>
    /// 部门编码，企业内唯一。
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 部门层级。
    /// </summary>

    int32_t getDeptLevel() const;
    bool deptLevelIsSet() const;
    void unsetdeptLevel();
    void setDeptLevel(int32_t value);

    /// <summary>
    /// 部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 部门名路径。
    /// </summary>

    std::string getDeptNamePath() const;
    bool deptNamePathIsSet() const;
    void unsetdeptNamePath();
    void setDeptNamePath(const std::string& value);

    /// <summary>
    /// 是否叶子节点。
    /// </summary>

    bool isIsLeafNode() const;
    bool isLeafNodeIsSet() const;
    void unsetisLeafNode();
    void setIsLeafNode(bool value);

    /// <summary>
    /// 父部门编码。
    /// </summary>

    std::string getParentDeptCode() const;
    bool parentDeptCodeIsSet() const;
    void unsetparentDeptCode();
    void setParentDeptCode(const std::string& value);

    /// <summary>
    /// 部门编码路径。
    /// </summary>

    std::string getDeptCodePath() const;
    bool deptCodePathIsSet() const;
    void unsetdeptCodePath();
    void setDeptCodePath(const std::string& value);

    /// <summary>
    /// 备注。
    /// </summary>

    std::string getNote() const;
    bool noteIsSet() const;
    void unsetnote();
    void setNote(const std::string& value);

    /// <summary>
    /// 企业ID。
    /// </summary>

    std::string getCorpId() const;
    bool corpIdIsSet() const;
    void unsetcorpId();
    void setCorpId(const std::string& value);

    /// <summary>
    /// 其他用户对该部门下用户的访问权限。
    /// </summary>

    std::string getInPermission() const;
    bool inPermissionIsSet() const;
    void unsetinPermission();
    void setInPermission(const std::string& value);

    /// <summary>
    /// 该部门下用户访问权限控制。
    /// </summary>

    std::string getOutPermission() const;
    bool outPermissionIsSet() const;
    void unsetoutPermission();
    void setOutPermission(const std::string& value);

    /// <summary>
    /// 允许访问的部门列表。
    /// </summary>

    std::vector<IdMarkDTO>& getDesignatedOutDeptCodes();
    bool designatedOutDeptCodesIsSet() const;
    void unsetdesignatedOutDeptCodes();
    void setDesignatedOutDeptCodes(const std::vector<IdMarkDTO>& value);

    /// <summary>
    /// 部门排序号。
    /// </summary>

    int32_t getSortLevel() const;
    bool sortLevelIsSet() const;
    void unsetsortLevel();
    void setSortLevel(int32_t value);


protected:
    std::string deptCode_;
    bool deptCodeIsSet_;
    int32_t deptLevel_;
    bool deptLevelIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string deptNamePath_;
    bool deptNamePathIsSet_;
    bool isLeafNode_;
    bool isLeafNodeIsSet_;
    std::string parentDeptCode_;
    bool parentDeptCodeIsSet_;
    std::string deptCodePath_;
    bool deptCodePathIsSet_;
    std::string note_;
    bool noteIsSet_;
    std::string corpId_;
    bool corpIdIsSet_;
    std::string inPermission_;
    bool inPermissionIsSet_;
    std::string outPermission_;
    bool outPermissionIsSet_;
    std::vector<IdMarkDTO> designatedOutDeptCodes_;
    bool designatedOutDeptCodesIsSet_;
    int32_t sortLevel_;
    bool sortLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryDeptResultDTO_H_
